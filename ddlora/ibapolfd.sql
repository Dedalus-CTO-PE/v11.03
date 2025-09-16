create table ibapolaf
(
  ibpluniq    varchar2(10) default ' ' not null,
  ibpltype    varchar2(3) default ' ' not null,
  ibplurno    varchar2(8) default ' ' not null,
  ibplvisn    varchar2(8) default ' ' not null,
  ibplskey    varchar2(40) default ' ' not null,
  ibplpscd    varchar2(4) default ' ' not null,
  ibplspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibapola1 primary key( 
ibpluniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
