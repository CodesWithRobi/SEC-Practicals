# EX-02-Cross-Platform-Prompting-Evaluating-Diverse-Techniques-in-AI-Powered-Text-Summarization

## AIM
To evaluate and compare the effectiveness of prompting techniques (zero-shot, few-shot, chain-of-thought, role-based) across different AI platforms (e.g., ChatGPT, Gemini, Claude, Copilot) in a specific task: text summarization.

## Algorithm
Define the Use Case: Select a specific task for evaluation across platforms (e.g., summarizing a document, answering a technical questiogenerating a creative story / Code). Ensure the use case is applicable to all platforms and will allow for comparison across response quaaccuracy, and depth. Create a Set of Prompts: Prepare a uniform set of prompts that align with the chosen use case. Each prompt shoulclear and precise, ensuring that all platforms are evaluated using the same input. Consider multiple prompts to capture the versatility oplatform in handling different aspects of the use case. Run the Experiment on Each AI Platform: Input the prompts into each AI tool (ChClaude, Bard, Cohere Command, and Meta) and gather the responses. Ensure the same conditions are applied for each platform, such aformat, time to respond, and prompt delivery. Record response times, ease of interaction with the platform, and any technical issuesencountered. Evaluate Response Quality: Assess each platform’s responses using the following criteria: Accuracy,Clarity,Depth,RelevanceCompare Performance: Compare the collected data to identify differences in performance across platforms. Identify any platform-speciadvantages, such as faster response times, more accurate answers, or more intuitive interfaces. Deliverables: A comparison table outliniperformance of each platform (ChatGPT, Claude, Bard, Cohere Command, and Meta) based on accuracy, clarity, depth, and relevance ofresponses. A final report summarizing the findings of the experiment, including recommendations on the most suitable AI platform for use cases based on performance and user

## Algorithm: Design and Develop a Test Scenario and Execute the Prompts under Diverse AI Platforms:
Expected Output from Different Platforms:

### 1.Straightforward Prompt
Prompt: "What is the capital of France?"

ChatGPT: The capital of France is Paris.

Claude: Paris is the capital of France.

Bard: The capital of France is Paris.

Cohere Command: Paris is the capital of France.

Meta: The capital of France is Paris.

### 2.Tabular Format Prompting
Prompt: "Create a table comparing the features of AI models."

| AI Platform    | Response                                                                                     |
| -------------- | -------------------------------------------------------------------------------------------- |
| ChatGPT        | Feature --------- Natural Language Understanding Contextual Understanding Availability Speed |
| Claude         | Feature --------- Natural Language Understanding Speed Data Usage                            |
| Bard           | Feature --------- Contextual Understanding Speed Availability                                |
| Cohere Command | Feature --------- Speed Contextual Understanding Availability                                |

### 3.Missing Word Prompting
Prompt: "The capital of Italy is ___."

ChatGPT: The capital of Italy is Rome.

Claude: The capital of Italy is Rome.

Bard: The capital of Italy is Rome.

Cohere Command: The capital of Italy is Rome.

Meta: The capital of Italy is Rome.

### 4.Preceding Question Prompting
Prompt: "Given that the capital of France is Paris, what is the capital of Italy?"

ChatGPT: The capital of Italy is Rome.

Claude: The capital of Italy is Rome.

Bard: The capital of Italy is Rome.

Cohere Command: The capital of Italy is Rome.

Meta: The capital of Italy is Rome.

### 5.Comparative Analysis Prompt
Prompt: "Compare the features of Python and Java."

ChatGPT: Python is known for its simplicity and ease of use, great for beginners, while Java is more complex but offers strong performance for large-scale applications. Python is better for rapid development, and Java excels in performance for enterprise systems.

Claude: Python is preferred for its simplicity, while Java is known for robustness and scalability. Python allows faster development times, but Java performs better for large-scale systems.

Bard: Python is versatile, easy to learn, and suitable for various applications. Java is more complex but highly robust and used in enterprise-level applications. Python is preferred for quick prototyping, while Java is favored for performance.

Cohere Command: Python is flexible, great for beginners and quick development. Java is more rigid but performs better in large systems.

Meta: Python is easier for beginners, while Java is more robust and suited for large applications.

### 6.Experiential Perspective Prompt
Prompt: "What is the best way to improve focus while studying?"

ChatGPT: Minimize distractions by finding a quiet space, use the Pomodoro Technique, break tasks into smaller chunks, take short breaks, stay hydrated, and get enough sleep.

Claude: Focus can be improved by organizing your study space, setting clear goals, and using active recall and spaced repetition. Minimizing distractions and taking regular breaks will help.

Bard: The best way to improve focus is to create a distraction-free study environment, set specific goals, and use techniques like Pomodoro. Mindfulness techniques and regular breaks can also be helpful.

Cohere Command: Limit distractions, use the Pomodoro Technique, and take regular breaks. Organize study materials and set clear goals to stay focused.

Meta: Minimize distractions, set a schedule, and take short, regular breaks to refresh your mind.

### 7.Everyday Functioning Prompt
Prompt: "How do I prepare for a job interview?"

ChatGPT: Start by researching the company and the role, practice answers to common interview questions, dress appropriately, ensure your resume is up-to-date, and arrive on time.

Claude: Prepare by learning about the company and the job position. Practice typical interview questions and highlight your skills. Dress appropriately and arrive punctually.

Bard: Research the company and role, practice common questions, prepare examples to showcase your strengths, dress professionally, and arrive early.

Cohere Command: Research the company, practice your responses to common interview questions, dress appropriately, and be punctual.

Meta: Research the company, prepare answers to common interview questions, dress professionally, and arrive early to make a good impression.

### 8.Universal Prompt Structures
Prompt: "Explain the process of machine learning in simple terms."

ChatGPT: Machine learning is when computers use data to find patterns and make decisions without being explicitly programmed. The more data the computer has, the better it becomes at predictions.

Claude: Machine learning allows computers to learn from experience. Data is fed into algorithms that help the computer recognize patterns and make predictions or decisions.

Bard: Machine learning involves computers learning from data to make decisions. By analyzing large amounts of information, computers can identify patterns and make predictions.

Cohere Command: Machine learning is when computers find patterns in data to make decisions or predictions, improving as they process more data.

Meta: Machine learning is a process where computers analyze data, find patterns, and use that to make predictions or decisions.

## Summary of Responses:
| **Prompt Type**                         | **ChatGPT**                               | **Claude**                          | **Bard**                           | **Cohere Command**                    | **Meta**                               |
| --------------------------------------- | ----------------------------------------- | ----------------------------------- | ---------------------------------- | ------------------------------------- | -------------------------------------- |
| **Straightforward Prompts**             | Excellent, clear, and quick               | Clear and concise                   | Responsive and detailed            | Efficient but less detailed           | Good, typically straightforward        |
| **Tabular Format Prompting**            | Excellent formatting capabilities         | Moderate, occasionally messy        | Strong but occasionally incomplete | Less adept at formatting              | Varies, typically simple tables        |
| **Missing Word Prompting**              | Handles context well                      | Accurate but less context-aware     | Good at filling blanks             | Solid, but misses nuances             | Effective for simple blanks            |
| **Preceding Question Prompting**        | Strong memory for context                 | Moderate memory handling            | Good for short context             | Works well with shorter context       | Can be inconsistent with longer chains |
| **Comparative Analysis Prompt**         | Deep, insightful comparisons              | Good at breaking down pros/cons     | Balanced, insightful               | Concise but lacks depth               | Provides simple comparisons            |
| **Experiential Perspective Prompt**     | Offers practical and empathetic responses | Nuanced and thoughtful              | Practical with real-world focus    | Less personal, more factual           | General advice, lacks empathy          |
| **Everyday Functioning Prompts**        | Detailed, step-by-step guides             | Practical, with personal touch      | Actionable, with examples          | Functional, straightforward           | Good general advice                    |
| **Universal Prompt Structures**         | Excellent at adapting to needs            | Versatile with multiple contexts    | Strong explanations with examples  | Concise, clear for simple topics      | Clear, but lacks depth in complexity   |
| **Prompt Refinements/Size Limitations** | Handles long prompts well                 | Moderate handling of complex inputs | Works well with medium-length      | Handles long prompts, but less detail | Works well with medium-length          |

## Result
Thus the Prompting tools are executed and analysed sucessfully .
