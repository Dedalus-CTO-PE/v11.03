create table sinaudwa
(
siwaaudd    char(8),
siwaaudt    char(8),
siwaaudp    char(2),
siwaaudr    char(1),
siwaauds    decimal(1,0),
siwaaudo    char(4),
siwawar     char(5),
siwades     char(40),
siwatyp     decimal(1,0),
siwacty     decimal(1,0),
siwapty     decimal(1,0),
siwaled     char(2),
siwaiacc    char(12),
siwapacc    char(12),
siwadiss    char(5),
siwaresp    char(4),
siwaur1     char(15),
siwamuac    char(12),
siwanat     decimal(1,0),
siwaur2     char(1),
siwaud1     char(8),
siwaud2     char(8),
siwauc1     char(3),
siwauc2     char(3),
siwauy1     char(1),
siwauy2     char(1),
siwapic     decimal(1,0),
siwapa1     decimal(1,0),
siwapa2     decimal(1,0),
siwapa3     decimal(1,0),
siwapa4     decimal(1,0),
siwanpo     char(7),
siwasta     char(12),
siwapsh     char(1),
lf          char(1)
);
create index sinaudwa on sinaudwa
(
siwaaudd,
siwaaudt,
siwaaudp,
siwaaudr
);
revoke all on sinaudwa from public ; 
grant select on sinaudwa to public ; 
create table sinwaraf
(
siwawar     char(5),
siwades     char(40),
siwatyp     decimal(1,0),
siwacty     decimal(1,0),
siwapty     decimal(1,0),
siwaled     char(2),
siwaiacc    char(12),
siwapacc    char(12),
siwadiss    char(5),
siwaresp    char(4),
siwaur1     char(15),
siwamuac    char(12),
siwanat     decimal(1,0),
siwaur2     char(1),
siwaud1     char(8),
siwaud2     char(8),
siwauc1     char(3),
siwauc2     char(3),
siwauy1     char(1),
siwauy2     char(1),
siwapic     decimal(1,0),
siwapa1     decimal(1,0),
siwapa2     decimal(1,0),
siwapa3     decimal(1,0),
siwapa4     decimal(1,0),
siwanpo     char(7),
siwasta     char(12),
siwapsh     char(1),
lf          char(1)
);
create unique index sinwara1 on sinwaraf
(
siwawar
);
create unique index sinwara2 on sinwaraf
(
siwades,
siwawar
);
revoke all on sinwaraf from public ; 
grant select on sinwaraf to public ; 
