height = float(input("Enter your height: "))
weight = float(input("Enter your weight: "))

heightinch = height * 0.45359237
weightkg = weight * 0.0254

BMI = height / weight

print("Your bmi: ", BMI)