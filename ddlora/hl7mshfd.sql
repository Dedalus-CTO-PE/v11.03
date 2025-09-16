create table hl7mshaf
(
  dmshin01    varchar2(20) default ' ' not null,
  dmshin02    varchar2(2) default ' ' not null,
  msh001      varchar2(2) default ' ' not null,
  msh002      varchar2(4) default ' ' not null,
  msh003      varchar2(127) default ' ' not null,
  msh004      varchar2(127) default ' ' not null,
  msh005      varchar2(127) default ' ' not null,
  msh006      varchar2(127) default ' ' not null,
  msh007      varchar2(26) default ' ' not null,
  msh008      varchar2(40) default ' ' not null,
  msh009      varchar2(7) default ' ' not null,
  msh010      varchar2(20) default ' ' not null,
  msh011      varchar2(3) default ' ' not null,
  msh012      varchar2(8) default ' ' not null,
  msh013      varchar2(15) default ' ' not null,
  msh01401    varchar2(90) default ' ' not null,
  msh01402    varchar2(90) default ' ' not null,
  msh015      varchar2(2) default ' ' not null,
  msh016      varchar2(2) default ' ' not null,
  msh017      varchar2(2) default ' ' not null,
  msh018      varchar2(6) default ' ' not null,
  msh019      varchar2(60) default ' ' not null,
  msh020      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7msh01 primary key( 
dmshin01,
dmshin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
