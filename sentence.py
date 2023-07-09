sentence = input("Enter a sentence: ")

print("You entered:", sentence)
print("Length of the sentence:", len(sentence))
print("Length as a string:", str(len(sentence)))
print("Number of words:", len(sentence.split()))

if len(sentence.split()) > 5:
  print("Too long!")
else:
  print("Good length!")

index = 0
while index < len(sentence):
  print(sentence[index])
  index += 1

characters = list(sentence)
print("Characters in a list:", characters)

for char in reversed(characters):
  print(char)

for num in range(0, len(sentence), 2):
  print(num)

sentence_tuple = (sentence, len(sentence), len(sentence.split()))
print("Sentence tuple:", sentence_tuple)