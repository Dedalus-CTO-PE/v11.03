create table patecaaf
(
dpteaadm    char(8),
dpteaepn    char(2),
pteawght    char(4),
pteaclss    char(3),
pteacrit    char(3),
pteauvth    char(3),
pteaspar    char(57),
lf          char(1)
);
create unique index patecaa1 on patecaaf
(
dpteaadm,
dpteaepn
);
revoke all on patecaaf from public ; 
grant select on patecaaf to public ; 
