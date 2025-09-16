create table watudsaf
(
wtuddate    char(6),
wtudunit    char(3),
wtuddoct    char(6),
wtudprty    char(3),
wtudadd     decimal(8,0),
wtudadmt    decimal(8,0),
wtudlast    decimal(8,0),
wtudiaa     decimal(8,0),
wtudbook    decimal(8,0),
wtudnumb    decimal(8,0),
wtudspar    char(11),
lf          char(1)
);
create unique index watudsa1 on watudsaf
(
wtuddate,
wtudunit,
wtuddoct,
wtudprty
);
revoke all on watudsaf from public ; 
grant select on watudsaf to public ; 
