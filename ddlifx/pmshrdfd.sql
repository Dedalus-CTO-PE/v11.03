create table pmshrdaf
(
pmhrhosp    char(3),
pmhrward    char(3),
pmhrbedd    char(3),
pmhrrdat    char(8),
pmhrrtim    char(8),
pmhrrsta    char(3),
pmhrcsta    char(3),
pmhrcweb    char(10),
pmhrcdat    char(8),
pmhrctim    char(8),
pmhrstat    char(3),
pmhrcom1    char(50),
pmhrcom2    char(50),
pmhrcres    char(3),
pmhrwebu    char(10),
pmhrdatu    char(8),
pmhrtimu    char(8),
pmhrspar    char(50),
lf          char(1)
);
create unique index pmshrda1 on pmshrdaf
(
pmhrhosp,
pmhrward,
pmhrbedd,
pmhrrdat,
pmhrrtim
);
create unique index pmshrda2 on pmshrdaf
(
pmhrrdat,
pmhrrtim,
pmhrhosp,
pmhrward,
pmhrbedd
);
revoke all on pmshrdaf from public ; 
grant select on pmshrdaf to public ; 
