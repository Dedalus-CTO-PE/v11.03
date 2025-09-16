create table outrcmaf
(
  otrcuniq    varchar2(10) default ' ' not null,
  otrcline    varchar2(3) default ' ' not null,
  otrccomm    varchar2(80) default ' ' not null,
  otrccuid    varchar2(10) default ' ' not null,
  otrccdat    varchar2(8) default ' ' not null,
  otrcctim    varchar2(8) default ' ' not null,
  otrcuuid    varchar2(10) default ' ' not null,
  otrcudat    varchar2(8) default ' ' not null,
  otrcutim    varchar2(8) default ' ' not null,
  otrcspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outrcma1 primary key( 
otrcuniq,
otrcline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
