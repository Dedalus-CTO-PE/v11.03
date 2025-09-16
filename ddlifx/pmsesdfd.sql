create table pmsesdaf
(
pmsdfbid    char(3),
pmsdarid    char(20),
pmsdfrid    char(12),
pmsdrptc    char(3),
pmsdscod    char(11),
pmsdsrvc    char(3),
pmsdsfec    char(4),
pmsdsexc    char(3),
pmsdsfet    char(80),
pmsdspar    char(30),
lf          char(1)
);
create unique index pmsesda1 on pmsesdaf
(
pmsdfbid,
pmsdarid,
pmsdfrid,
pmsdrptc,
pmsdscod,
pmsdsrvc,
pmsdsfec,
pmsdsexc
);
revoke all on pmsesdaf from public ; 
grant select on pmsesdaf to public ; 
