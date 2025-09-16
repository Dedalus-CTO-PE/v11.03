create table oprattaf
(
opatdate    char(6),
opatdoct    char(6),
opatoper    decimal(6,0),
opatasst    decimal(6,0),
opatanae    decimal(6,0),
opatspar    char(15),
lf          char(1)
);
create unique index opratta1 on oprattaf
(
opatdate,
opatdoct
);
revoke all on oprattaf from public ; 
grant select on oprattaf to public ; 
