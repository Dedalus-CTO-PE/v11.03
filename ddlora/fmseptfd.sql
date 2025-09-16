create table fmseptaf
(
  fmepchqa    varchar2(15) default ' ' not null,
  fmepppid    varchar2(3) default ' ' not null,
  fmepactv    varchar2(1) default ' ' not null,
  fmepaddr    varchar2(40) default ' ' not null,
  fmepport    varchar2(5) default ' ' not null,
  fmepdesc    varchar2(30) default ' ' not null,
  fmepcdat    varchar2(8) default ' ' not null,
  fmepctim    varchar2(8) default ' ' not null,
  fmepcuid    varchar2(10) default ' ' not null,
  fmepudat    varchar2(8) default ' ' not null,
  fmeputim    varchar2(8) default ' ' not null,
  fmepuuid    varchar2(10) default ' ' not null,
  fmepspar    varchar2(109) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsepta1 primary key( 
fmepchqa,
fmepppid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
