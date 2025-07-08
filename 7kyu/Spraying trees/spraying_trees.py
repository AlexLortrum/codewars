def task(w,n,c):
    x = n * c
    dictionary = {"Monday":'James',
         "Tuesday":'John',
         'Wednesday':"Robert",
         "Thursday":'Michael',
         "Friday":"William"
         }

    for week,name in dictionary.items():
        if week == w:
            out = 'It is {} today, {}, you have to work, you must spray {} trees and you need {} dollars to buy liquid'.format(week,name,n,x)

            return out
