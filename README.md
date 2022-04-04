#TP_PROJECT_2022
##Описание проекта
Данный проект посвящен разработке компьютерной игры, похожей на игру Slay. Она представляет собой пошаговую стратегию с достаточно простыми правилами. Игроки должны расширять свои империи, состоящие из гексов, вступая в битвы с другими империями.
##Правила игры
Каждая империя опредедляется отдельным цветом на карте и имеет свою экономику. Она складывается исходя из резмера территории игрока и дополнительных бонусов, которые даются фермами. Помимо захвата других гексов и экономики, важно уделать время защите. Для этого придусмотрены  башни для защиты от разных типов юнитов. Для победы необходимо развить экономику, построить юнитов и ими захватить как можно больше территорий. Необходимо учитывать, что каждый юнит требует зарплату, что ухудшает экономику. Побеждает тот, кто захватит всю территорию карты.
##Первая итерация
Первая итерация представляет собой разработку создания основных компонентов игры - юниитов и башен. Для этого используется паттерн Builder, который позволяет построить сущность из заранее подготовленных данных. Также были реализованны диаграммы взаимодействий написанных элементов игры с игровым движком.
##Вторая итерация
Вторая итерация заключается в реализации простейшего игрового движка, который будет запускать свою игру и обрабатывать действия пользователя. Помимо логической составляющей, реализован графический интерфейс игрового гексогонального поля, юнитов и строений