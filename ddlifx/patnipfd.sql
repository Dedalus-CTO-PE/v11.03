create table patnipbf
(
dnbsyst     char(1),
nbindc      char(3),
nbresd      char(3),
nbcomp      char(3),
nbindv      char(3),
nbdesc      char(30),
nbitem      char(3),
nbamt       decimal(14,2),
nbsparx     char(20),
lf          char(1)
);
create unique index patnipb1 on patnipbf
(
dnbsyst,
nbindc,
nbresd,
nbcomp,
nbindv
);
revoke all on patnipbf from public ; 
grant select on patnipbf to public ; 
