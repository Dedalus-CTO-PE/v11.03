create table patperss
(
  pecode      varchar2(6) default ' ' not null,
  petype      varchar2(2) default ' ' not null,
  dpepage     varchar2(2) default ' ' not null,
  dpeline     varchar2(2) default ' ' not null,
  pedesc      varchar2(75) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpers1 primary key( 
pecode,
petype,
dpepage,
dpeline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
