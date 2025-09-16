create table ceaaudst
(
  cestaudd    char(8) default ' ' not null,
  cestaudt    char(8) default ' ' not null,
  cestaudp    char(2) default ' ' not null,
  cestaudr    char(1) default ' ' not null,
  cestauds    decimal(1,0) default 0 not null,
  cestaudo    char(4) default ' ' not null,
  cestbat     char(5) default ' ' not null,
  cestlin     char(4) default ' ' not null,
  cesthcd     char(2) default ' ' not null,
  cesteps     char(16) default ' ' not null,
  cestdat     char(8) default ' ' not null,
  cesttim     char(5) default ' ' not null,
  cestpsc     char(7) default ' ' not null,
  cestspc     char(3) default ' ' not null,
  cestqty     decimal(8,2) default 0 not null,
  cestst1     decimal(10,2) default 0 not null,
  cestst2     decimal(10,2) default 0 not null,
  cestst3     decimal(10,2) default 0 not null,
  cestst4     decimal(10,2) default 0 not null,
  cestst5     decimal(10,2) default 0 not null,
  cestfil     char(8) default ' ' not null,
  cestkey     char(30) default ' ' not null,
  cestud1     char(8) default ' ' not null,
  cestud2     char(8) default ' ' not null,
  cestuy1     char(1) default ' ' not null,
  cestuy2     char(1) default ' ' not null,
  cestitm     char(10) default ' ' not null,
  cestdcd     char(6) default ' ' not null,
  cestspa     char(4) default ' ' not null,
  lf          char(1)
);
create index ceaaudst on ceaaudst
(
cestaudd,
cestaudt,
cestaudp,
cestaudr
);
revoke all on ceaaudst from public ; 
grant select on ceaaudst to public ; 
create table ceastraf
(
  cestbat     char(5) default ' ' not null,
  cestlin     char(4) default ' ' not null,
  cesthcd     char(2) default ' ' not null,
  cesteps     char(16) default ' ' not null,
  cestdat     char(8) default ' ' not null,
  cesttim     char(5) default ' ' not null,
  cestpsc     char(7) default ' ' not null,
  cestspc     char(3) default ' ' not null,
  cestqty     decimal(8,2) default 0 not null,
  cestst1     decimal(10,2) default 0 not null,
  cestst2     decimal(10,2) default 0 not null,
  cestst3     decimal(10,2) default 0 not null,
  cestst4     decimal(10,2) default 0 not null,
  cestst5     decimal(10,2) default 0 not null,
  cestfil     char(8) default ' ' not null,
  cestkey     char(30) default ' ' not null,
  cestud1     char(8) default ' ' not null,
  cestud2     char(8) default ' ' not null,
  cestuy1     char(1) default ' ' not null,
  cestuy2     char(1) default ' ' not null,
  cestitm     char(10) default ' ' not null,
  cestdcd     char(6) default ' ' not null,
  cestspa     char(4) default ' ' not null,
  lf          char(1)
);
create unique index ceastra1 on ceastraf
(
cestbat,
cestlin
);
create unique index ceastra2 on ceastraf
(
cestfil,
cestkey,
cestbat,
cestlin
);
create unique index ceastra3 on ceastraf
(
cesthcd,
cesteps,
cestbat,
cestlin
);
create unique index ceastra4 on ceastraf
(
cestspc,
cestdat,
cestbat,
cestlin
);
create unique index ceastra5 on ceastraf
(
cestpsc,
cestdat,
cestbat,
cestlin
);
revoke all on ceastraf from public ; 
grant select on ceastraf to public ; 
