import nltk
from nltk.chat.util import Chat,reflections

pairs=[
  [
    r"Hey (.*)",
    ["Hello I'm KukkadNukkad Chatbot here to serve you!"]
  ],
  [
    r" (.*) contact (.*)",
    ["Contact - Customer care: 180000001"]
  ],
  [
    r" (.*) menu (.*) ",
    ["Menu includes 100% Non-veg food. From various types of chicken to diffrent kinds of oysters. We serve it all here"]
  ],
  [
    r" (.*) loaction (.*) ",
    [" We are located at MG Road, Pune"]
  ],
  [
    r" (.*) timing|hours (.*) ",
    [" Open from 9 am to 11 pm"]
  ],
  [
    r" (.*) home delivery (.*) ",
    ["Sorry we don't provide any delivery service."]
  ],
  [
    r" (.*) ",
    [" Sorry ! Didnt get that."]
  ]
]

def chat():
  print('This is the K&N chatbot')
  chat=Chat(pairs,reflections)
  chat.converse()

if "__name__" = "__main__":
  chat()
