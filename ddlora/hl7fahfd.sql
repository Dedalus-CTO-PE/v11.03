create table hl7fahaf
(
  hlahrsid    varchar2(64) default ' ' not null,
  hlahvrid    varchar2(10) default ' ' not null,
  hlahcnt1    varchar2(4) default ' ' not null,
  hlaharef    varchar2(200) default ' ' not null,
  hlahatyp    varchar2(255) default ' ' not null,
  hlahadis    varchar2(200) default ' ' not null,
  hlahaidu    varchar2(50) default ' ' not null,
  hlahasys    varchar2(255) default ' ' not null,
  hlahaivl    varchar2(200) default ' ' not null,
  hlahaids    varchar2(255) default ' ' not null,
  hlahaidv    varchar2(200) default ' ' not null,
  hlahaidc    varchar2(50) default ' ' not null,
  hlahaidd    varchar2(200) default ' ' not null,
  hlahaius    varchar2(10) default ' ' not null,
  hlahaidt    varchar2(200) default ' ' not null,
  hlahaips    varchar2(40) default ' ' not null,
  hlahaipe    varchar2(40) default ' ' not null,
  hlahspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7faha1 primary key( 
hlahrsid,
hlahvrid,
hlahcnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
