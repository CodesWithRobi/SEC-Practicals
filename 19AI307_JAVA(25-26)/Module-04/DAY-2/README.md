# Ex.No:4(B) IMPLEMENT SOLID PRINCIPLES IN JAVA PROGRAM

## QUESTION:

You are developing a YouTube-like platform. Each channel can have multiple subscribers (viewers).
Whenever the channel uploads a new video, it must instantly notify all of its subscribers.
Each subscriber prints their own message like:
"[SubscriberName]: New video from [ChannelName]! Watching now..."
The channel doesn't care who the subscribers are or how many there are—it just broadcasts the update.
Student's Objective:Implement the Observer Pattern:
When a video is uploaded, all subscribed users are notified.
Notifications should include channel name and video title.
Input Format:First line: channelName
Second line: Integer n – number of subscribers
Next n lines: subscriber names
Next line: Integer v – number of videos uploaded
Next v lines: video titles
Output Format:After each video upload:
[ChannelName] uploaded: [VideoTitle][SubscriberName]: New video from [ChannelName]! Watching now...[SubscriberName]: New video from [ChannelName]! Watching now......
For example:
Example: Village Cooking channel
2
Shalu
Mahi
1
Grilled Chicken Wings | Village Cooking channel uploaded: Grilled Chicken Wings 
Shalu: New video from Village Cooking channel! Watch now...  
Mahi: New video from Village Cooking channel! Watch now...

## AIM:

To write a Java program to implement solid principles using java.

## ALGORITHM :

1.	Start the program.
2.	Import the necessary package 'java.util' and 'java.io' if needed.
3.	Create the required class/interface with specified attributes and methods.
4.	Implement the required logic (constructors, getters/setters, calculations).
5.	In the main method, create objects and call the necessary methods.
6.	Display the output as per the requirements.
7.	Stop the program.

## PROGRAM:

```
/*
Program to implement SOLID Principles using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.*;

interface Observer {
    void notify(String channelName, String videoTitle);
}

class Subscriber implements Observer {
    String name;
    Subscriber(String name) {
        this.name = name;
    }
    
    public void notify(String channelName, String videoTitle) {
        System.out.format("%s: New video from %s! Watch now...%n", name, channelName);
    }
}

class Channel {
    String name;
    List<Observer> subscribers = new ArrayList<>();
    
    Channel(String name) {
        this.name = name;
    }
    
    void subscribe(Observer obs) {
        subscribers.add(obs);
    }
    
    void uploadVideo(String title) {
        System.out.println(name + " uploaded: " + title);
        for(var subscriber: subscribers) {
            subscriber.notify(name, title);
        }
    }
}

public class prog {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String channelName = sc.nextLine();

        Channel channel = new Channel(channelName);

        int n = sc.nextInt(); sc.nextLine();
        for (int i = 0; i < n; i++) {
            String sub = sc.nextLine();
            channel.subscribe(new Subscriber(sub));
        }

        int v = sc.nextInt(); sc.nextLine();
        for (int i = 0; i < v; i++) {
            String title = sc.nextLine();
            channel.uploadVideo(title);
        }
    }
}
```

## OUTPUT:

Input: Village Cooking channel 2 Shalu Mahi 1 Grilled Chicken Wings
Output: Village Cooking channel uploaded: Grilled Chicken Wings Shalu: New video from Village Cooking channel! Watch now... Mahi: New video from Village Cooking channel! Watch now...

## RESULT:

Thus the Java program to implement solid principles using java was executed successfully.