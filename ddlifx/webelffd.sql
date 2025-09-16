create table webelfaf
(
  wbefelgn    char(8) default ' ' not null,
  wbefurno    char(8) default ' ' not null,
  wbefoecc    char(1) default ' ' not null,
  wbeftitl    char(4) default ' ' not null,
  wbeffnam    char(40) default ' ' not null,
  wbefsnam    char(40) default ' ' not null,
  wbefhfgn    char(40) default ' ' not null,
  wbefhfsn    char(40) default ' ' not null,
  wbefgend    char(1) default ' ' not null,
  wbefbdat    char(8) default ' ' not null,
  wbefeadt    char(8) default ' ' not null,
  wbefisty    char(3) default ' ' not null,
  wbefplos    char(3) default ' ' not null,
  wbefdint    char(3) default ' ' not null,
  wbefpeai    char(1) default ' ' not null,
  wbefemad    char(1) default ' ' not null,
  wbefpric    char(3) default ' ' not null,
  wbefprim    char(9) default ' ' not null,
  wbefclty    char(3) default ' ' not null,
  wbefhfnd    char(6) default ' ' not null,
  wbefhfnt    char(8) default ' ' not null,
  wbefhfmn    char(19) default ' ' not null,
  wbefdiag    char(50) default ' ' not null,
  wbefsrv1    char(9) default ' ' not null,
  wbefsrv2    char(9) default ' ' not null,
  wbefsrv3    char(9) default ' ' not null,
  wbefsrv4    char(9) default ' ' not null,
  wbefsrv5    char(9) default ' ' not null,
  wbefcuid    char(10) default ' ' not null,
  wbefcdat    char(8) default ' ' not null,
  wbefctim    char(8) default ' ' not null,
  wbefdvan    char(10) default ' ' not null,
  wbefvisn    char(8) default ' ' not null,
  wbefcntr    char(3) default ' ' not null,
  wbefflag    char(1) default ' ' not null,
  wbeftrid    char(24) default ' ' not null,
  wbefmsid    char(36) default ' ' not null,
  wbefspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webelfa1 on webelfaf
(
wbefelgn
);
create unique index webelfa2 on webelfaf
(
wbefurno,
wbefelgn
);
create unique index webelfa3 on webelfaf
(
wbefsnam,
wbeffnam,
wbefelgn
);
create unique index webelfa4 on webelfaf
(
wbeffnam,
wbefsnam,
wbefelgn
);
create unique index webelfa5 on webelfaf
(
wbefvisn,
wbefcntr,
wbefelgn
);
create unique index webelfa6 on webelfaf
(
wbeftrid,
wbefelgn
);
create unique index webelfa7 on webelfaf
(
wbefmsid,
wbefelgn
);
revoke all on webelfaf from public ; 
grant select on webelfaf to public ; 
