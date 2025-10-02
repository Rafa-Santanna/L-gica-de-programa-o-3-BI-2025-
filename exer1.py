t=float(input("Digite o tempo gasto na viagem:"))
v_m=float(input("Digite o valor da velocidade:"))
d=t*v_m
lu=d/12
print("Velocidade mádia", v_m)
print("O tempo gasto é", t)
print("Distancia percorrida",d)
print("Quantiade de litros usadas na viagem",'%.2f'%lu)