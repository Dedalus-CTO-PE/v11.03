create table mehauds1
(
  mhdsaudd    varchar2(8) default ' ' not null,
  mhdsaudt    varchar2(8) default ' ' not null,
  mhdsaudp    varchar2(2) default ' ' not null,
  mhdsaudr    varchar2(1) default ' ' not null,
  mhdsauds    number(1,0) default 0 not null,
  mhdsaudo    varchar2(4) default ' ' not null,
  dmhdsadm    varchar2(8) default ' ' not null,
  mhdsadd1    varchar2(35) default ' ' not null,
  mhdsadd2    varchar2(35) default ' ' not null,
  mhdssubr    varchar2(35) default ' ' not null,
  mhdsadd4    varchar2(35) default ' ' not null,
  mhdspost    varchar2(8) default ' ' not null,
  mhdsspr1    varchar2(4) default ' ' not null,
  mhdsacty    varchar2(3) default ' ' not null,
  mhdsreft    varchar2(3) default ' ' not null,
  mhdsstay    varchar2(3) default ' ' not null,
  mhdsldom    number(1,0) default 0 not null,
  mhdslgp     number(1,0) default 0 not null,
  mhdstrst    number(1,0) default 0 not null,
  mhdsdohn    number(1,0) default 0 not null,
  mhdsoutp    number(1,0) default 0 not null,
  mhdscsrg    number(1,0) default 0 not null,
  mhdscsdt    varchar2(8) default ' ' not null,
  mhdscfut    varchar2(3) default ' ' not null,
  mhdscfud    varchar2(8) default ' ' not null,
  mhdsusr1    varchar2(3) default ' ' not null,
  mhdsusr2    varchar2(3) default ' ' not null,
  mhdsusr3    varchar2(3) default ' ' not null,
  mhdsusr4    varchar2(3) default ' ' not null,
  mhdsusr5    varchar2(3) default ' ' not null,
  mhdsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index mehauds1 on mehauds1
(
mhdsaudd,
mhdsaudt,
mhdsaudp,
mhdsaudr
)
tablespace pas_indx; 
create table mehds1af
(
  dmhdsadm    varchar2(8) default ' ' not null,
  mhdsadd1    varchar2(35) default ' ' not null,
  mhdsadd2    varchar2(35) default ' ' not null,
  mhdssubr    varchar2(35) default ' ' not null,
  mhdsadd4    varchar2(35) default ' ' not null,
  mhdspost    varchar2(8) default ' ' not null,
  mhdsspr1    varchar2(4) default ' ' not null,
  mhdsacty    varchar2(3) default ' ' not null,
  mhdsreft    varchar2(3) default ' ' not null,
  mhdsstay    varchar2(3) default ' ' not null,
  mhdsldom    number(1,0) default 0 not null,
  mhdslgp     number(1,0) default 0 not null,
  mhdstrst    number(1,0) default 0 not null,
  mhdsdohn    number(1,0) default 0 not null,
  mhdsoutp    number(1,0) default 0 not null,
  mhdscsrg    number(1,0) default 0 not null,
  mhdscsdt    varchar2(8) default ' ' not null,
  mhdscfut    varchar2(3) default ' ' not null,
  mhdscfud    varchar2(8) default ' ' not null,
  mhdsusr1    varchar2(3) default ' ' not null,
  mhdsusr2    varchar2(3) default ' ' not null,
  mhdsusr3    varchar2(3) default ' ' not null,
  mhdsusr4    varchar2(3) default ' ' not null,
  mhdsusr5    varchar2(3) default ' ' not null,
  mhdsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehds1a1 primary key( 
dmhdsadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
