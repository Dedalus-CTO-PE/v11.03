create table webelfaf
(
  wbefelgn    varchar2(8) default ' ' not null,
  wbefurno    varchar2(8) default ' ' not null,
  wbefoecc    varchar2(1) default ' ' not null,
  wbeftitl    varchar2(4) default ' ' not null,
  wbeffnam    varchar2(40) default ' ' not null,
  wbefsnam    varchar2(40) default ' ' not null,
  wbefhfgn    varchar2(40) default ' ' not null,
  wbefhfsn    varchar2(40) default ' ' not null,
  wbefgend    varchar2(1) default ' ' not null,
  wbefbdat    varchar2(8) default ' ' not null,
  wbefeadt    varchar2(8) default ' ' not null,
  wbefisty    varchar2(3) default ' ' not null,
  wbefplos    varchar2(3) default ' ' not null,
  wbefdint    varchar2(3) default ' ' not null,
  wbefpeai    varchar2(1) default ' ' not null,
  wbefemad    varchar2(1) default ' ' not null,
  wbefpric    varchar2(3) default ' ' not null,
  wbefprim    varchar2(9) default ' ' not null,
  wbefclty    varchar2(3) default ' ' not null,
  wbefhfnd    varchar2(6) default ' ' not null,
  wbefhfnt    varchar2(8) default ' ' not null,
  wbefhfmn    varchar2(19) default ' ' not null,
  wbefdiag    varchar2(50) default ' ' not null,
  wbefsrv1    varchar2(9) default ' ' not null,
  wbefsrv2    varchar2(9) default ' ' not null,
  wbefsrv3    varchar2(9) default ' ' not null,
  wbefsrv4    varchar2(9) default ' ' not null,
  wbefsrv5    varchar2(9) default ' ' not null,
  wbefcuid    varchar2(10) default ' ' not null,
  wbefcdat    varchar2(8) default ' ' not null,
  wbefctim    varchar2(8) default ' ' not null,
  wbefdvan    varchar2(10) default ' ' not null,
  wbefvisn    varchar2(8) default ' ' not null,
  wbefcntr    varchar2(3) default ' ' not null,
  wbefflag    varchar2(1) default ' ' not null,
  wbeftrid    varchar2(24) default ' ' not null,
  wbefmsid    varchar2(36) default ' ' not null,
  wbefspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webelfa1 primary key( 
wbefelgn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webelfa2 on webelfaf
(
wbefurno,
wbefelgn
)
  tablespace pas_indx; 
create unique index webelfa3 on webelfaf
(
wbefsnam,
wbeffnam,
wbefelgn
)
  tablespace pas_indx; 
create unique index webelfa4 on webelfaf
(
wbeffnam,
wbefsnam,
wbefelgn
)
  tablespace pas_indx; 
create unique index webelfa5 on webelfaf
(
wbefvisn,
wbefcntr,
wbefelgn
)
  tablespace pas_indx; 
create unique index webelfa6 on webelfaf
(
wbeftrid,
wbefelgn
)
  tablespace pas_indx; 
create unique index webelfa7 on webelfaf
(
wbefmsid,
wbefelgn
)
  tablespace pas_indx; 
