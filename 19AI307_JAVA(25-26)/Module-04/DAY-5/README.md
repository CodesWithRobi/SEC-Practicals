# Ex.No:4(D) DESIGN PATTERN ---- BEHAVIOUR PATTERN

## QUESTION:

Create a ChatRoom class (mediator) and two users (colleagues) who send and receive messages through it. No direct communication allowed. (Mediator Pattern)
For example:
Example: Alice
Bob
3
Alice
Bob
Hey Bob!
Bob
Alice
Hi Alice, how are you?
Alice
Bob
Let's meet at 5 | Alice to Bob: Hey Bob!
Bob to Alice: Hi Alice, how are you?
Alice to Bob: Let's meet at 5 | Karan
Meera
3
Karan
Meera
Meeting at 10?
Karan
Meera
Please confirm.
Karan
Meera
I’ll wait in the lobby. | Karan to Meera: Meeting at 10?
Karan to Meera: Please confirm.
Karan to Meera: I’ll wait in the lobby.

## AIM:

To write a Java program to implement behaviour pattern using java.

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
Program to implement Behaviour Pattern using Java
Developed by: ROBINSON J
RegisterNumber: 212223040170
*/
```

## SOURCE CODE:

```java
import java.util.*;

class ChatRoom {
    // TODO: Register users
    private Map<String, User> users = new HashMap<>();
    public void registerUser(User user) {
        users.put(user.getName(), user);
    }
    // TODO: Send message from one user to another
    public void sendMessage(String from, String to, String message) {
        if(users.containsKey(to)) {
            users.get(to).receive(from, message);
        }
    }
}

class User {
    // Fields: name, ChatRoom reference
    private String name;
    private ChatRoom chatRoom;
    
    // TODO: Constructor to set name and register with ChatRoom
    User(String name, ChatRoom chatRoom) {
        this.name = name;
        this.chatRoom = chatRoom;
        this.chatRoom.registerUser(this);
    }
    // TODO: send(to, message)
    public void send(String to, String message) {
        chatRoom.sendMessage(name, to, message);
    }
    // TODO: receive(from, message)
    public void receive(String from, String message) {
        System.out.format("%s to %s: %s%n", from, name, message);
    }
    // TODO: getName()
    public String getName() { return name; }
}

public class ChatApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // TODO: Create ChatRoom
        ChatRoom chatRoom = new ChatRoom();
        // TODO: Read user names and create User instances
        User u1 = new User(sc.next(), chatRoom);
        User u2 = new User(sc.next(), chatRoom);
        // TODO: Read message count and loop to send messages
        int n = sc.nextInt(); sc.nextLine();
        for(int i = 0; i < n; i++) {
            if(sc.nextLine().trim().equals(u1.getName())) {
                u1.send(sc.nextLine().trim(), sc.nextLine());
            } else {
                u2.send(sc.nextLine().trim(), sc.nextLine());
            }
        }
        // Format: sender, receiver, message

        sc.close();
    }
}
```

## OUTPUT:

Input: Alice Bob 3 Alice Bob Hey Bob! Bob Alice Hi Alice, how are you? Alice Bob Let's meet at 5
Output: Alice to Bob: Hey Bob! Bob to Alice: Hi Alice, how are you? Alice to Bob: Let's meet at 5

Input: Karan Meera 3 Karan Meera Meeting at 10? Karan Meera Please confirm. Karan Meera I’ll wait in the lobby.
Output: Karan to Meera: Meeting at 10? Karan to Meera: Please confirm. Karan to Meera: I’ll wait in the lobby.

## RESULT:

Thus the Java program to implement behaviour pattern using java was executed successfully.