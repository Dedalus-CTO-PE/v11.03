create table outbitaf
(
otbivisn    char(8),
otbiitmc    char(2),
otbiurno    char(8),
otbidate    char(8),
otbiiflg    char(2),
otbiitmn    char(9),
otbisubn    char(3),
otbicdat    char(8),
otbictim    char(8),
otbicuid    char(10),
otbiudat    char(8),
otbiutim    char(8),
otbiuuid    char(10),
otbistat    char(1),
otbipuse    char(20),
otbispar    char(50),
lf          char(1)
);
create unique index outbita1 on outbitaf
(
otbivisn,
otbiitmc
);
create unique index outbita2 on outbitaf
(
otbivisn,
otbiiflg,
otbiitmn,
otbisubn,
otbiitmc
);
revoke all on outbitaf from public ; 
grant select on outbitaf to public ; 
