string = """If it __________ (rain) tomorrow, we __________ (not/go) to the park.

You __________ (miss) the bus if you __________ (not/hurry).

If she __________ (study) harder, she __________ (pass) the exam.

If they __________ (invite) us, we __________ (attend) the party.

We __________ (have) more fun if the weather __________ (be) nice.

If you __________ (not/eat) so much, you __________ (feel) better.

He __________ (help) you if you __________ (ask) for assistance.

I __________ (be) upset if you __________ (not/come) to my birthday party.

If the car __________ (break) down, we __________ (call) for assistance.

If I __________ (know) you were in town, I __________ (invite) you over.
If I __________ (be) taller, I __________ (reach) that book on the top shelf.

She __________ (travel) more if she __________ (have) more free time.

If it __________ (not/rain) yesterday, we __________ (go) to the beach.

They __________ (buy) a bigger house if they __________ (win) the lottery.

If you __________ (ask) me earlier, I __________ (help) you with your homework.

He __________ (exercise) regularly if he __________ (want) to stay healthy.

We __________ (visit) the museum if it __________ (be) open today.

If I __________ (know) you were coming, I __________ (bake) a cake.

They __________ (be) happier if they __________ (live) in the countryside.

If I __________ (not/have) to work tomorrow, I __________ (attend) the party.
The book __________ you recommended was fascinating.

The person __________ car broke down on the highway called for assistance.

I met a musician __________ songs are known worldwide.

The restaurant __________ we had dinner last night had excellent service.

The reason __________ I didn't attend the meeting was an unexpected emergency.

She is the teacher __________ class is always engaging and informative.

The city __________ I was born is known for its historical landmarks.

The project __________ they are working on together is quite ambitious.

The company __________ CEO resigned last week is facing financial challenges.

I have a friend __________ brother is a famous actor."""

arr = string.replace('\n\n', '\n').split('\n')
import random
while len(arr) > 0:
    print(arr.pop(random.randint(0, len(arr)-1)))