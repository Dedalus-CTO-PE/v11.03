create table oprsouaf
(
opsodate    char(6),
opsodoct    char(6),
opsotype    char(1),
opsootyp    char(3),
dopsoaty    char(1),
dopsoown    char(1),
dopsotrn    char(1),
opsoncas    decimal(6,0),
opsonopr    decimal(6,0),
opsotime    decimal(6,0),
opsospar    char(11),
lf          char(1)
);
create unique index oprsoua1 on oprsouaf
(
opsodate,
opsodoct,
opsotype,
opsootyp,
dopsoaty,
dopsoown,
dopsotrn
);
revoke all on oprsouaf from public ; 
grant select on oprsouaf to public ; 
