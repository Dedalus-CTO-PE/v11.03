create table mehauvi1
(
  mhviaudd    varchar2(8) default ' ' not null,
  mhviaudt    varchar2(8) default ' ' not null,
  mhviaudp    varchar2(2) default ' ' not null,
  mhviaudr    varchar2(1) default ' ' not null,
  mhviauds    number(1,0) default 0 not null,
  mhviaudo    varchar2(4) default ' ' not null,
  dmhviadm    varchar2(8) default ' ' not null,
  dmhvista    varchar2(1) default ' ' not null,
  mhvilsrv    varchar2(8) default ' ' not null,
  mhvither    varchar2(30) default ' ' not null,
  mhviadd1    varchar2(35) default ' ' not null,
  mhviadd2    varchar2(35) default ' ' not null,
  mhvisubr    varchar2(35) default ' ' not null,
  mhviadd4    varchar2(35) default ' ' not null,
  mhvipost    varchar2(8) default ' ' not null,
  mhvispr1    varchar2(4) default ' ' not null,
  mhviacty    varchar2(3) default ' ' not null,
  mhvirfdt    varchar2(8) default ' ' not null,
  mhvifcdt    varchar2(8) default ' ' not null,
  mhvirodt    varchar2(8) default ' ' not null,
  mhvivisi    number(1,0) default 0 not null,
  mhvibene    varchar2(3) default ' ' not null,
  mhvibepd    varchar2(30) default ' ' not null,
  mhvimxbe    number(1,0) default 0 not null,
  mhvimxdt    varchar2(8) default ' ' not null,
  mhvisupp    number(1,0) default 0 not null,
  mhviusr1    varchar2(3) default ' ' not null,
  mhviusr2    varchar2(3) default ' ' not null,
  mhviusr3    varchar2(3) default ' ' not null,
  mhviusr4    varchar2(3) default ' ' not null,
  mhviusr5    varchar2(3) default ' ' not null,
  mhviatyp    varchar2(3) default ' ' not null,
  mhvimcat    varchar2(3) default ' ' not null,
  mhvipsps    varchar2(3) default ' ' not null,
  mhvilawr    varchar2(30) default ' ' not null,
  mhviordh    varchar2(3) default ' ' not null,
  mhvicjar    varchar2(8) default ' ' not null,
  mhviredd    varchar2(8) default ' ' not null,
  mhvis76r    varchar2(8) default ' ' not null,
  mhviurno    varchar2(8) default ' ' not null,
  mhvirotm    varchar2(8) default ' ' not null,
  mhvipddt    varchar2(8) default ' ' not null,
  mhvipdtm    varchar2(8) default ' ' not null,
  mhvicsmn    varchar2(10) default ' ' not null,
  mhvipycl    varchar2(6) default ' ' not null,
  mhvitror    varchar2(3) default ' ' not null,
  mhvipdgv    varchar2(1) default ' ' not null,
  mhviacde    varchar2(3) default ' ' not null,
  mhvirmha    varchar2(1) default ' ' not null,
  mhvirmhc    varchar2(3) default ' ' not null,
  mhvirftm    varchar2(8) default ' ' not null,
  mhviamdt    varchar2(8) default ' ' not null,
  mhviamtm    varchar2(8) default ' ' not null,
  mhvimhor    varchar2(6) default ' ' not null,
  mhvispar    varchar2(66) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index mehauvi1 on mehauvi1
(
mhviaudd,
mhviaudt,
mhviaudp,
mhviaudr
)
tablespace pas_indx; 
create table mehvi1af
(
  dmhviadm    varchar2(8) default ' ' not null,
  dmhvista    varchar2(1) default ' ' not null,
  mhvilsrv    varchar2(8) default ' ' not null,
  mhvither    varchar2(30) default ' ' not null,
  mhviadd1    varchar2(35) default ' ' not null,
  mhviadd2    varchar2(35) default ' ' not null,
  mhvisubr    varchar2(35) default ' ' not null,
  mhviadd4    varchar2(35) default ' ' not null,
  mhvipost    varchar2(8) default ' ' not null,
  mhvispr1    varchar2(4) default ' ' not null,
  mhviacty    varchar2(3) default ' ' not null,
  mhvirfdt    varchar2(8) default ' ' not null,
  mhvifcdt    varchar2(8) default ' ' not null,
  mhvirodt    varchar2(8) default ' ' not null,
  mhvivisi    number(1,0) default 0 not null,
  mhvibene    varchar2(3) default ' ' not null,
  mhvibepd    varchar2(30) default ' ' not null,
  mhvimxbe    number(1,0) default 0 not null,
  mhvimxdt    varchar2(8) default ' ' not null,
  mhvisupp    number(1,0) default 0 not null,
  mhviusr1    varchar2(3) default ' ' not null,
  mhviusr2    varchar2(3) default ' ' not null,
  mhviusr3    varchar2(3) default ' ' not null,
  mhviusr4    varchar2(3) default ' ' not null,
  mhviusr5    varchar2(3) default ' ' not null,
  mhviatyp    varchar2(3) default ' ' not null,
  mhvimcat    varchar2(3) default ' ' not null,
  mhvipsps    varchar2(3) default ' ' not null,
  mhvilawr    varchar2(30) default ' ' not null,
  mhviordh    varchar2(3) default ' ' not null,
  mhvicjar    varchar2(8) default ' ' not null,
  mhviredd    varchar2(8) default ' ' not null,
  mhvis76r    varchar2(8) default ' ' not null,
  mhviurno    varchar2(8) default ' ' not null,
  mhvirotm    varchar2(8) default ' ' not null,
  mhvipddt    varchar2(8) default ' ' not null,
  mhvipdtm    varchar2(8) default ' ' not null,
  mhvicsmn    varchar2(10) default ' ' not null,
  mhvipycl    varchar2(6) default ' ' not null,
  mhvitror    varchar2(3) default ' ' not null,
  mhvipdgv    varchar2(1) default ' ' not null,
  mhviacde    varchar2(3) default ' ' not null,
  mhvirmha    varchar2(1) default ' ' not null,
  mhvirmhc    varchar2(3) default ' ' not null,
  mhvirftm    varchar2(8) default ' ' not null,
  mhviamdt    varchar2(8) default ' ' not null,
  mhviamtm    varchar2(8) default ' ' not null,
  mhvimhor    varchar2(6) default ' ' not null,
  mhvispar    varchar2(66) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehvi1a1 primary key( 
dmhviadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehvi1a2 on mehvi1af
(
dmhvista,
dmhviadm
)
  tablespace pas_indx; 
create unique index mehvi1a3 on mehvi1af
(
mhvilsrv,
dmhviadm
)
  tablespace pas_indx; 
create unique index mehvi1a4 on mehvi1af
(
mhviurno,
dmhviadm
)
  tablespace pas_indx; 
