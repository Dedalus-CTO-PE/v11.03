create table pmshrdaf
(
pmhrhosp    varchar2(3),
pmhrward    varchar2(3),
pmhrbedd    varchar2(3),
pmhrrdat    varchar2(8),
pmhrrtim    varchar2(8),
pmhrrsta    varchar2(3),
pmhrcsta    varchar2(3),
pmhrcweb    varchar2(10),
pmhrcdat    varchar2(8),
pmhrctim    varchar2(8),
pmhrstat    varchar2(3),
pmhrcom1    varchar2(50),
pmhrcom2    varchar2(50),
pmhrcres    varchar2(3),
pmhrwebu    varchar2(10),
pmhrdatu    varchar2(8),
pmhrtimu    varchar2(8),
pmhrspar    varchar2(50),
lf          varchar2(1),
constraint pmshrda1 primary key( 
pmhrhosp,
pmhrward,
pmhrbedd,
pmhrrdat,
pmhrrtim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmshrdaf for pmshrdaf;
create unique index pmshrda2 on pmshrdaf
(
pmhrrdat,
pmhrrtim,
pmhrhosp,
pmhrward,
pmhrbedd
)
  tablespace pas_indx; 
