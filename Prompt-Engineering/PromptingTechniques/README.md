# Exno.3-Scenario-Based Report Development Utilizing Diverse Prompting Techniques                                                                           
### REGISTER NUMBER : 212223040170
### Aim: 
To design an AI-powered chatbot that assists customers in resolving issues related to product troubleshooting, order tracking, and general inquiries. The chatbot should handle various customer queries efficiently while maintaining a conversational and user-friendly tone. In this experiment, we will employ different prompt patterns to guide the development process of the chatbot, ranging from basic task-oriented prompts to more complex, persona-driven prompts.

### Algorithm:  
First, design customer scenarios using Role and Few-Shot prompting. Collect synthetic data. Train the AI chatbot using Chain-of-Thought and Instruction prompting to handle queries logically. 
Evaluate using Zero-Shot and Reflexive prompting to measure generalization and improve responses. Finally, generate a report using Persona and Comparative prompting to present findings clearly to stakeholders.

### 1.Direct Instruction Prompts
Objective: Guide the chatbot to respond concisely to customer inquiries.
Prompt Pattern:
Prompt: "When a customer asks for the status of their order, reply with: 'Your order is currently being processed and will be delivered by [date].'"

### 2.Contextual Prompting
Objective: Incorporate specific context based on the user’s previous interaction.
Prompt Pattern:
Prompt: "If the customer previously mentioned they haven’t received their order, say, 'I see that you mentioned your order hasn't arrived yet. Let me check the details for you and get back shortly.'"

### 3.Persona-Based Prompting
Objective: Design the chatbot to adopt a friendly, helpful persona.
Prompt Pattern:
Prompt: "Pretend you are a friendly customer service representative. Use a conversational tone, such as: 'Hey there! I’m here to help with any questions you might have. Let’s get your issue sorted!'"

### 3.Few-Shot Prompting
Objective: Teach the chatbot through examples to generalize its responses.
Prompt Pattern:
Prompt:
"Here are some examples of handling technical questions:
'My phone isn't charging.' → 'Have you tried using a different cable? If that doesn’t work, it may be an issue with the port.'
'The screen is flickering.' → 'It sounds like a display issue. Have you tried restarting the device?'
Now, respond to: 'My app keeps crashing.'"

### 4.Chain of Thought Prompting
Objective: Guide the chatbot through step-by-step reasoning for technical issues.

Prompt:
"When a customer reports their laptop overheating, guide them:
Ask if they are using it on a soft surface.
Suggest using a flat, hard surface.
Ask if vents are cleaned.
Recommend restarting the device.
Now, solve: 'My laptop fan is making a loud noise.'"

### 5.Instruction with Constraints
Objective: Provide assistance under specific constraints (e.g., response length, tone).
Prompt Pattern:
Prompt: "Respond to order inquiries in no more than 50 words, avoiding technical jargon. Example: 'Your order is on the way and should arrive by [date]. Feel free to reach out if you need anything else.'"

### 6.Reflective Prompting
Objective: Reflect the customer’s query back before giving a solution to reduce misunderstandings.
Prompt Pattern:
Prompt: "When a customer asks for help, first reflect their question. Example: 'You're asking how to reset your password, correct? Here’s how you can do it.'"

![image](https://github.com/user-attachments/assets/78c38262-b0f3-4312-963d-909012c667d5) 

Final Report Structure (Suggested):
Introduction
Aim, background, and chatbot purpose.

Prompt Design
Types of prompts used and their roles in development.

Data Collection
Methods and sources for training data.

Model Implementation
Architecture, training techniques, and tools utilized.

Evaluation Metrics
Accuracy, F1-score, response relevance, customer satisfaction.

Findings & Analysis
Observations on the impact of different prompting techniques.

Conclusion & Recommendations
Identified improvement areas and proposals for future work.



 ### Result: 
 Thus the Prompts were exected succcessfully .
