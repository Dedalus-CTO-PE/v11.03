create table webomfaf
(
  wbofelgn    char(8) default ' ' not null,
  wbofurno    char(8) default ' ' not null,
  wbofoecc    char(1) default ' ' not null,
  wboftitl    char(4) default ' ' not null,
  wboffnam    char(40) default ' ' not null,
  wbofsnam    char(40) default ' ' not null,
  wbofhfgn    char(40) default ' ' not null,
  wbofhfsn    char(40) default ' ' not null,
  wbofgend    char(1) default ' ' not null,
  wbofbdat    char(8) default ' ' not null,
  wbofeadt    char(8) default ' ' not null,
  wbofisty    char(3) default ' ' not null,
  wbofplos    char(3) default ' ' not null,
  wbofdint    char(3) default ' ' not null,
  wbofpeai    char(1) default ' ' not null,
  wbofemad    char(1) default ' ' not null,
  wbofpric    char(3) default ' ' not null,
  wbofprim    char(9) default ' ' not null,
  wbofclty    char(3) default ' ' not null,
  wbofhfnd    char(6) default ' ' not null,
  wbofhfnt    char(8) default ' ' not null,
  wbofhfmn    char(19) default ' ' not null,
  wbofdiag    char(50) default ' ' not null,
  wbofsrv1    char(9) default ' ' not null,
  wbofsrv2    char(9) default ' ' not null,
  wbofsrv3    char(9) default ' ' not null,
  wbofsrv4    char(9) default ' ' not null,
  wbofsrv5    char(9) default ' ' not null,
  wbofcuid    char(10) default ' ' not null,
  wbofcdat    char(8) default ' ' not null,
  wbofctim    char(8) default ' ' not null,
  wbofdvan    char(10) default ' ' not null,
  wbofvisn    char(8) default ' ' not null,
  wbofcntr    char(3) default ' ' not null,
  wbofflag    char(1) default ' ' not null,
  wboftrid    char(24) default ' ' not null,
  wbofmsid    char(36) default ' ' not null,
  wbofstcd    char(3) default ' ' not null,
  wbofmedi    char(10) default ' ' not null,
  wbofmedr    char(1) default ' ' not null,
  wbofprpr    char(8) default ' ' not null,
  wbofsvpr    char(8) default ' ' not null,
  wbofitm1    char(5) default ' ' not null,
  wbofitm2    char(5) default ' ' not null,
  wbofitm3    char(5) default ' ' not null,
  wbofitm4    char(5) default ' ' not null,
  wbofitm5    char(5) default ' ' not null,
  wbofspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webomfa1 on webomfaf
(
wbofelgn
);
create unique index webomfa2 on webomfaf
(
wbofurno,
wbofelgn
);
create unique index webomfa3 on webomfaf
(
wbofsnam,
wboffnam,
wbofelgn
);
create unique index webomfa4 on webomfaf
(
wboffnam,
wbofsnam,
wbofelgn
);
create unique index webomfa5 on webomfaf
(
wbofvisn,
wbofcntr,
wbofelgn
);
create unique index webomfa6 on webomfaf
(
wboftrid,
wbofelgn
);
create unique index webomfa7 on webomfaf
(
wbofmsid,
wbofelgn
);
revoke all on webomfaf from public ; 
grant select on webomfaf to public ; 
