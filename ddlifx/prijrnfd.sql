create table prijrnlf
(
prjrcode    char(3),
prjrdate    char(8),
prjrdebt    char(8),
dprjrscn    char(2),
dprjrtrn    char(6),
prjrinvn    char(8),
prjrspar    char(4),
lf          char(1)
);
create unique index prijrnl1 on prijrnlf
(
prjrcode,
prjrdate,
prjrdebt,
dprjrscn,
dprjrtrn,
prjrinvn
);
create unique index prijrnl2 on prijrnlf
(
prjrdebt,
dprjrscn,
dprjrtrn,
prjrinvn,
prjrcode,
prjrdate
);
revoke all on prijrnlf from public ; 
grant select on prijrnlf to public ; 
