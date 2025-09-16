create table pmselfaf
(
  pmefelgn    char(8) default ' ' not null,
  pmefurno    char(8) default ' ' not null,
  pmefoecc    char(1) default ' ' not null,
  pmeftitl    char(4) default ' ' not null,
  pmeffnam    char(40) default ' ' not null,
  pmefsnam    char(40) default ' ' not null,
  pmefhfgn    char(40) default ' ' not null,
  pmefhfsn    char(40) default ' ' not null,
  pmefgend    char(1) default ' ' not null,
  pmefbdat    char(8) default ' ' not null,
  pmefeadt    char(8) default ' ' not null,
  pmefisty    char(3) default ' ' not null,
  pmefplos    char(3) default ' ' not null,
  pmefdint    char(3) default ' ' not null,
  pmefpeai    char(1) default ' ' not null,
  pmefemad    char(1) default ' ' not null,
  pmefpric    char(3) default ' ' not null,
  pmefprim    char(9) default ' ' not null,
  pmefclty    char(3) default ' ' not null,
  pmefhfnd    char(6) default ' ' not null,
  pmefhfnt    char(8) default ' ' not null,
  pmefhfmn    char(19) default ' ' not null,
  pmefdiag    char(50) default ' ' not null,
  pmefsrv1    char(9) default ' ' not null,
  pmefsrv2    char(9) default ' ' not null,
  pmefsrv3    char(9) default ' ' not null,
  pmefsrv4    char(9) default ' ' not null,
  pmefsrv5    char(9) default ' ' not null,
  pmefcuid    char(10) default ' ' not null,
  pmefcdat    char(8) default ' ' not null,
  pmefctim    char(8) default ' ' not null,
  pmefdvan    char(10) default ' ' not null,
  pmefvisn    char(8) default ' ' not null,
  pmefcntr    char(3) default ' ' not null,
  pmefflag    char(1) default ' ' not null,
  pmefspar    char(88) default ' ' not null,
  lf          char(1)
);
create unique index pmselfa1 on pmselfaf
(
pmefelgn
);
create unique index pmselfa2 on pmselfaf
(
pmefurno,
pmefelgn
);
create unique index pmselfa3 on pmselfaf
(
pmefsnam,
pmeffnam,
pmefelgn
);
create unique index pmselfa4 on pmselfaf
(
pmeffnam,
pmefsnam,
pmefelgn
);
revoke all on pmselfaf from public ; 
grant select on pmselfaf to public ; 
