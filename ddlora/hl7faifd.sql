create table hl7faiaf
(
  hlairsid    varchar2(64) default ' ' not null,
  hlaivrid    varchar2(10) default ' ' not null,
  hlaicnt1    varchar2(4) default ' ' not null,
  hlaiaare    varchar2(200) default ' ' not null,
  hlaiaaty    varchar2(255) default ' ' not null,
  hlaiaadi    varchar2(200) default ' ' not null,
  hlaiaaus    varchar2(50) default ' ' not null,
  hlaiaisy    varchar2(255) default ' ' not null,
  hlaiaiva    varchar2(200) default ' ' not null,
  hlaiaitx    varchar2(200) default ' ' not null,
  hlaiacsy    varchar2(255) default ' ' not null,
  hlaiacve    varchar2(200) default ' ' not null,
  hlaiacco    varchar2(50) default ' ' not null,
  hlaiacdi    varchar2(200) default ' ' not null,
  hlaiacus    varchar2(10) default ' ' not null,
  hlaiaast    varchar2(40) default ' ' not null,
  hlaiaaen    varchar2(40) default ' ' not null,
  hlaispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faia1 primary key( 
hlairsid,
hlaivrid,
hlaicnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
