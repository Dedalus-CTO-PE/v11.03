create table webomfaf
(
  wbofelgn    varchar2(8) default ' ' not null,
  wbofurno    varchar2(8) default ' ' not null,
  wbofoecc    varchar2(1) default ' ' not null,
  wboftitl    varchar2(4) default ' ' not null,
  wboffnam    varchar2(40) default ' ' not null,
  wbofsnam    varchar2(40) default ' ' not null,
  wbofhfgn    varchar2(40) default ' ' not null,
  wbofhfsn    varchar2(40) default ' ' not null,
  wbofgend    varchar2(1) default ' ' not null,
  wbofbdat    varchar2(8) default ' ' not null,
  wbofeadt    varchar2(8) default ' ' not null,
  wbofisty    varchar2(3) default ' ' not null,
  wbofplos    varchar2(3) default ' ' not null,
  wbofdint    varchar2(3) default ' ' not null,
  wbofpeai    varchar2(1) default ' ' not null,
  wbofemad    varchar2(1) default ' ' not null,
  wbofpric    varchar2(3) default ' ' not null,
  wbofprim    varchar2(9) default ' ' not null,
  wbofclty    varchar2(3) default ' ' not null,
  wbofhfnd    varchar2(6) default ' ' not null,
  wbofhfnt    varchar2(8) default ' ' not null,
  wbofhfmn    varchar2(19) default ' ' not null,
  wbofdiag    varchar2(50) default ' ' not null,
  wbofsrv1    varchar2(9) default ' ' not null,
  wbofsrv2    varchar2(9) default ' ' not null,
  wbofsrv3    varchar2(9) default ' ' not null,
  wbofsrv4    varchar2(9) default ' ' not null,
  wbofsrv5    varchar2(9) default ' ' not null,
  wbofcuid    varchar2(10) default ' ' not null,
  wbofcdat    varchar2(8) default ' ' not null,
  wbofctim    varchar2(8) default ' ' not null,
  wbofdvan    varchar2(10) default ' ' not null,
  wbofvisn    varchar2(8) default ' ' not null,
  wbofcntr    varchar2(3) default ' ' not null,
  wbofflag    varchar2(1) default ' ' not null,
  wboftrid    varchar2(24) default ' ' not null,
  wbofmsid    varchar2(36) default ' ' not null,
  wbofstcd    varchar2(3) default ' ' not null,
  wbofmedi    varchar2(10) default ' ' not null,
  wbofmedr    varchar2(1) default ' ' not null,
  wbofprpr    varchar2(8) default ' ' not null,
  wbofsvpr    varchar2(8) default ' ' not null,
  wbofitm1    varchar2(5) default ' ' not null,
  wbofitm2    varchar2(5) default ' ' not null,
  wbofitm3    varchar2(5) default ' ' not null,
  wbofitm4    varchar2(5) default ' ' not null,
  wbofitm5    varchar2(5) default ' ' not null,
  wbofspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webomfa1 primary key( 
wbofelgn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webomfa2 on webomfaf
(
wbofurno,
wbofelgn
)
  tablespace pas_indx; 
create unique index webomfa3 on webomfaf
(
wbofsnam,
wboffnam,
wbofelgn
)
  tablespace pas_indx; 
create unique index webomfa4 on webomfaf
(
wboffnam,
wbofsnam,
wbofelgn
)
  tablespace pas_indx; 
create unique index webomfa5 on webomfaf
(
wbofvisn,
wbofcntr,
wbofelgn
)
  tablespace pas_indx; 
create unique index webomfa6 on webomfaf
(
wboftrid,
wbofelgn
)
  tablespace pas_indx; 
create unique index webomfa7 on webomfaf
(
wbofmsid,
wbofelgn
)
  tablespace pas_indx; 
