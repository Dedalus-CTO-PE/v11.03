create table mehauvi1
(
  mhviaudd    char(8) default ' ' not null,
  mhviaudt    char(8) default ' ' not null,
  mhviaudp    char(2) default ' ' not null,
  mhviaudr    char(1) default ' ' not null,
  mhviauds    decimal(1,0) default 0 not null,
  mhviaudo    char(4) default ' ' not null,
  dmhviadm    char(8) default ' ' not null,
  dmhvista    char(1) default ' ' not null,
  mhvilsrv    char(8) default ' ' not null,
  mhvither    char(30) default ' ' not null,
  mhviadd1    char(35) default ' ' not null,
  mhviadd2    char(35) default ' ' not null,
  mhvisubr    char(35) default ' ' not null,
  mhviadd4    char(35) default ' ' not null,
  mhvipost    char(8) default ' ' not null,
  mhvispr1    char(4) default ' ' not null,
  mhviacty    char(3) default ' ' not null,
  mhvirfdt    char(8) default ' ' not null,
  mhvifcdt    char(8) default ' ' not null,
  mhvirodt    char(8) default ' ' not null,
  mhvivisi    decimal(1,0) default 0 not null,
  mhvibene    char(3) default ' ' not null,
  mhvibepd    char(30) default ' ' not null,
  mhvimxbe    decimal(1,0) default 0 not null,
  mhvimxdt    char(8) default ' ' not null,
  mhvisupp    decimal(1,0) default 0 not null,
  mhviusr1    char(3) default ' ' not null,
  mhviusr2    char(3) default ' ' not null,
  mhviusr3    char(3) default ' ' not null,
  mhviusr4    char(3) default ' ' not null,
  mhviusr5    char(3) default ' ' not null,
  mhviatyp    char(3) default ' ' not null,
  mhvimcat    char(3) default ' ' not null,
  mhvipsps    char(3) default ' ' not null,
  mhvilawr    char(30) default ' ' not null,
  mhviordh    char(3) default ' ' not null,
  mhvicjar    char(8) default ' ' not null,
  mhviredd    char(8) default ' ' not null,
  mhvis76r    char(8) default ' ' not null,
  mhviurno    char(8) default ' ' not null,
  mhvirotm    char(8) default ' ' not null,
  mhvipddt    char(8) default ' ' not null,
  mhvipdtm    char(8) default ' ' not null,
  mhvicsmn    char(10) default ' ' not null,
  mhvipycl    char(6) default ' ' not null,
  mhvitror    char(3) default ' ' not null,
  mhvipdgv    char(1) default ' ' not null,
  mhviacde    char(3) default ' ' not null,
  mhvirmha    char(1) default ' ' not null,
  mhvirmhc    char(3) default ' ' not null,
  mhvirftm    char(8) default ' ' not null,
  mhviamdt    char(8) default ' ' not null,
  mhviamtm    char(8) default ' ' not null,
  mhvimhor    char(6) default ' ' not null,
  mhvispar    char(66) default ' ' not null,
  lf          char(1)
);
create index mehauvi1 on mehauvi1
(
mhviaudd,
mhviaudt,
mhviaudp,
mhviaudr
);
revoke all on mehauvi1 from public ; 
grant select on mehauvi1 to public ; 
create table mehvi1af
(
  dmhviadm    char(8) default ' ' not null,
  dmhvista    char(1) default ' ' not null,
  mhvilsrv    char(8) default ' ' not null,
  mhvither    char(30) default ' ' not null,
  mhviadd1    char(35) default ' ' not null,
  mhviadd2    char(35) default ' ' not null,
  mhvisubr    char(35) default ' ' not null,
  mhviadd4    char(35) default ' ' not null,
  mhvipost    char(8) default ' ' not null,
  mhvispr1    char(4) default ' ' not null,
  mhviacty    char(3) default ' ' not null,
  mhvirfdt    char(8) default ' ' not null,
  mhvifcdt    char(8) default ' ' not null,
  mhvirodt    char(8) default ' ' not null,
  mhvivisi    decimal(1,0) default 0 not null,
  mhvibene    char(3) default ' ' not null,
  mhvibepd    char(30) default ' ' not null,
  mhvimxbe    decimal(1,0) default 0 not null,
  mhvimxdt    char(8) default ' ' not null,
  mhvisupp    decimal(1,0) default 0 not null,
  mhviusr1    char(3) default ' ' not null,
  mhviusr2    char(3) default ' ' not null,
  mhviusr3    char(3) default ' ' not null,
  mhviusr4    char(3) default ' ' not null,
  mhviusr5    char(3) default ' ' not null,
  mhviatyp    char(3) default ' ' not null,
  mhvimcat    char(3) default ' ' not null,
  mhvipsps    char(3) default ' ' not null,
  mhvilawr    char(30) default ' ' not null,
  mhviordh    char(3) default ' ' not null,
  mhvicjar    char(8) default ' ' not null,
  mhviredd    char(8) default ' ' not null,
  mhvis76r    char(8) default ' ' not null,
  mhviurno    char(8) default ' ' not null,
  mhvirotm    char(8) default ' ' not null,
  mhvipddt    char(8) default ' ' not null,
  mhvipdtm    char(8) default ' ' not null,
  mhvicsmn    char(10) default ' ' not null,
  mhvipycl    char(6) default ' ' not null,
  mhvitror    char(3) default ' ' not null,
  mhvipdgv    char(1) default ' ' not null,
  mhviacde    char(3) default ' ' not null,
  mhvirmha    char(1) default ' ' not null,
  mhvirmhc    char(3) default ' ' not null,
  mhvirftm    char(8) default ' ' not null,
  mhviamdt    char(8) default ' ' not null,
  mhviamtm    char(8) default ' ' not null,
  mhvimhor    char(6) default ' ' not null,
  mhvispar    char(66) default ' ' not null,
  lf          char(1)
);
create unique index mehvi1a1 on mehvi1af
(
dmhviadm
);
create unique index mehvi1a2 on mehvi1af
(
dmhvista,
dmhviadm
);
create unique index mehvi1a3 on mehvi1af
(
mhvilsrv,
dmhviadm
);
create unique index mehvi1a4 on mehvi1af
(
mhviurno,
dmhviadm
);
revoke all on mehvi1af from public ; 
grant select on mehvi1af to public ; 
