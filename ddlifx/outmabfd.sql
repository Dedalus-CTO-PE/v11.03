create table outmasbf
(
ombsite     char(6),
ombclin     char(6),
dombday     char(1),
ombstrt     char(5),
dombslot    char(3),
ombvtyp     char(3),
ombtime     char(5),
ombexsl     decimal(3,0),
dotmbres    char(2),
otmbshno    char(2),
otmbsdat    char(8),
ombspare    char(50),
lf          char(1)
);
create unique index outmasb1 on outmasbf
(
ombsite,
ombclin,
dombday,
ombstrt,
otmbshno,
otmbsdat,
dombslot
);
revoke all on outmasbf from public ; 
grant select on outmasbf to public ; 
