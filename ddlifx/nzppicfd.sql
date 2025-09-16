create table nzppicaf
(
nzpiadmn    char(8),
nzpiinvn    char(8),
nzpiurno    char(8),
nzpicntr    char(6),
nzpiclmn    char(3),
nzpisurg    char(10),
nzpifpay    char(1),
nzpicaps    char(1),
nzpiexpt    char(1),
nzpiuniq    char(6),
nzpicprc    char(9),
nzpipdat    char(8),
nzpicdat    char(8),
nzpictim    char(8),
nzpicuid    char(10),
nzpiudat    char(8),
nzpiutim    char(8),
nzpiuuid    char(10),
nzpianae    char(10),
nzpispar    char(90),
lf          char(1)
);
create unique index nzppica1 on nzppicaf
(
nzpiadmn,
nzpiinvn,
nzpiuniq
);
create unique index nzppica2 on nzppicaf
(
nzpipdat,
nzpiadmn,
nzpiinvn,
nzpiuniq
);
revoke all on nzppicaf from public ; 
grant select on nzppicaf to public ; 
