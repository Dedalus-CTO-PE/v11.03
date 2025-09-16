create table mrtextaf
(
  mrexeid     varchar2(4) default ' ' not null,
  mrexdesc    varchar2(35) default ' ' not null,
  mrexddfr    varchar2(8) default ' ' not null,
  mrexddto    varchar2(8) default ' ' not null,
  mrexadfr    varchar2(8) default ' ' not null,
  mrexadto    varchar2(8) default ' ' not null,
  mrexunit    varchar2(3) default ' ' not null,
  mrexward    varchar2(3) default ' ' not null,
  mrexpdrg    varchar2(4) default ' ' not null,
  mrexprcg    varchar2(3) default ' ' not null,
  mrexwlpr    varchar2(3) default ' ' not null,
  mrexcons    varchar2(6) default ' ' not null,
  mrexincd    varchar2(1) default ' ' not null,
  mrexautc    varchar2(4) default ' ' not null,
  mrexnumr    number(5,0) default 0 not null,
  mrexinpr    varchar2(1) default ' ' not null,
  mrexanl1    varchar2(3) default ' ' not null,
  mrexanl2    varchar2(3) default ' ' not null,
  mrexanl3    varchar2(3) default ' ' not null,
  mrexanl4    varchar2(3) default ' ' not null,
  mrexanm1    varchar2(3) default ' ' not null,
  mrexanm2    varchar2(3) default ' ' not null,
  mrexanm3    varchar2(3) default ' ' not null,
  mrexcuid    varchar2(10) default ' ' not null,
  mrexcdat    varchar2(8) default ' ' not null,
  mrexctim    varchar2(8) default ' ' not null,
  mrexmuid    varchar2(10) default ' ' not null,
  mrexmdat    varchar2(8) default ' ' not null,
  mrexmtim    varchar2(8) default ' ' not null,
  mrexdind    varchar2(1) default ' ' not null,
  mrexsdsc    varchar2(1) default ' ' not null,
  mrexsubr    varchar2(35) default ' ' not null,
  mrexpcod    varchar2(8) default ' ' not null,
  mrexpsex    varchar2(1) default ' ' not null,
  mrexcntr    varchar2(3) default ' ' not null,
  mrexatyp    varchar2(3) default ' ' not null,
  mrexptyp    varchar2(3) default ' ' not null,
  mrexvhos    varchar2(3) default ' ' not null,
  mrexspar    varchar2(110) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtexta1 primary key( 
mrexeid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtexta2 on mrtextaf
(
mrexdesc,
mrexeid
)
  tablespace pas_indx; 
