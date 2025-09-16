create table mrtextaf
(
  mrexeid     char(4) default ' ' not null,
  mrexdesc    char(35) default ' ' not null,
  mrexddfr    char(8) default ' ' not null,
  mrexddto    char(8) default ' ' not null,
  mrexadfr    char(8) default ' ' not null,
  mrexadto    char(8) default ' ' not null,
  mrexunit    char(3) default ' ' not null,
  mrexward    char(3) default ' ' not null,
  mrexpdrg    char(4) default ' ' not null,
  mrexprcg    char(3) default ' ' not null,
  mrexwlpr    char(3) default ' ' not null,
  mrexcons    char(6) default ' ' not null,
  mrexincd    char(1) default ' ' not null,
  mrexautc    char(4) default ' ' not null,
  mrexnumr    decimal(5,0) default 0 not null,
  mrexinpr    char(1) default ' ' not null,
  mrexanl1    char(3) default ' ' not null,
  mrexanl2    char(3) default ' ' not null,
  mrexanl3    char(3) default ' ' not null,
  mrexanl4    char(3) default ' ' not null,
  mrexanm1    char(3) default ' ' not null,
  mrexanm2    char(3) default ' ' not null,
  mrexanm3    char(3) default ' ' not null,
  mrexcuid    char(10) default ' ' not null,
  mrexcdat    char(8) default ' ' not null,
  mrexctim    char(8) default ' ' not null,
  mrexmuid    char(10) default ' ' not null,
  mrexmdat    char(8) default ' ' not null,
  mrexmtim    char(8) default ' ' not null,
  mrexdind    char(1) default ' ' not null,
  mrexsdsc    char(1) default ' ' not null,
  mrexsubr    char(35) default ' ' not null,
  mrexpcod    char(8) default ' ' not null,
  mrexpsex    char(1) default ' ' not null,
  mrexcntr    char(3) default ' ' not null,
  mrexatyp    char(3) default ' ' not null,
  mrexptyp    char(3) default ' ' not null,
  mrexvhos    char(3) default ' ' not null,
  mrexspar    char(110) default ' ' not null,
  lf          char(1)
);
create unique index mrtexta1 on mrtextaf
(
mrexeid
);
create unique index mrtexta2 on mrtextaf
(
mrexdesc,
mrexeid
);
revoke all on mrtextaf from public ; 
grant select on mrtextaf to public ; 
