create table mehauds1
(
  mhdsaudd    char(8) default ' ' not null,
  mhdsaudt    char(8) default ' ' not null,
  mhdsaudp    char(2) default ' ' not null,
  mhdsaudr    char(1) default ' ' not null,
  mhdsauds    decimal(1,0) default 0 not null,
  mhdsaudo    char(4) default ' ' not null,
  dmhdsadm    char(8) default ' ' not null,
  mhdsadd1    char(35) default ' ' not null,
  mhdsadd2    char(35) default ' ' not null,
  mhdssubr    char(35) default ' ' not null,
  mhdsadd4    char(35) default ' ' not null,
  mhdspost    char(8) default ' ' not null,
  mhdsspr1    char(4) default ' ' not null,
  mhdsacty    char(3) default ' ' not null,
  mhdsreft    char(3) default ' ' not null,
  mhdsstay    char(3) default ' ' not null,
  mhdsldom    decimal(1,0) default 0 not null,
  mhdslgp     decimal(1,0) default 0 not null,
  mhdstrst    decimal(1,0) default 0 not null,
  mhdsdohn    decimal(1,0) default 0 not null,
  mhdsoutp    decimal(1,0) default 0 not null,
  mhdscsrg    decimal(1,0) default 0 not null,
  mhdscsdt    char(8) default ' ' not null,
  mhdscfut    char(3) default ' ' not null,
  mhdscfud    char(8) default ' ' not null,
  mhdsusr1    char(3) default ' ' not null,
  mhdsusr2    char(3) default ' ' not null,
  mhdsusr3    char(3) default ' ' not null,
  mhdsusr4    char(3) default ' ' not null,
  mhdsusr5    char(3) default ' ' not null,
  mhdsspar    char(20) default ' ' not null,
  lf          char(1)
);
create index mehauds1 on mehauds1
(
mhdsaudd,
mhdsaudt,
mhdsaudp,
mhdsaudr
);
revoke all on mehauds1 from public ; 
grant select on mehauds1 to public ; 
create table mehds1af
(
  dmhdsadm    char(8) default ' ' not null,
  mhdsadd1    char(35) default ' ' not null,
  mhdsadd2    char(35) default ' ' not null,
  mhdssubr    char(35) default ' ' not null,
  mhdsadd4    char(35) default ' ' not null,
  mhdspost    char(8) default ' ' not null,
  mhdsspr1    char(4) default ' ' not null,
  mhdsacty    char(3) default ' ' not null,
  mhdsreft    char(3) default ' ' not null,
  mhdsstay    char(3) default ' ' not null,
  mhdsldom    decimal(1,0) default 0 not null,
  mhdslgp     decimal(1,0) default 0 not null,
  mhdstrst    decimal(1,0) default 0 not null,
  mhdsdohn    decimal(1,0) default 0 not null,
  mhdsoutp    decimal(1,0) default 0 not null,
  mhdscsrg    decimal(1,0) default 0 not null,
  mhdscsdt    char(8) default ' ' not null,
  mhdscfut    char(3) default ' ' not null,
  mhdscfud    char(8) default ' ' not null,
  mhdsusr1    char(3) default ' ' not null,
  mhdsusr2    char(3) default ' ' not null,
  mhdsusr3    char(3) default ' ' not null,
  mhdsusr4    char(3) default ' ' not null,
  mhdsusr5    char(3) default ' ' not null,
  mhdsspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehds1a1 on mehds1af
(
dmhdsadm
);
revoke all on mehds1af from public ; 
grant select on mehds1af to public ; 
