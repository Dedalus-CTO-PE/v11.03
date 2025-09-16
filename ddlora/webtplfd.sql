create table webtplaf
(
  wbtpprg     varchar2(8) default ' ' not null,
  wbtpopt     varchar2(2) default ' ' not null,
  wbtptpl     varchar2(3) default ' ' not null,
  wbtpdes     varchar2(25) default ' ' not null,
  wbtpfil     varchar2(40) default ' ' not null,
  wbtplev     varchar2(2) default ' ' not null,
  wbtpmsc     varchar2(1) default ' ' not null,
  wbtpmty     varchar2(1) default ' ' not null,
  wbtptar     varchar2(1) default ' ' not null,
  wbtpwid     varchar2(5) default ' ' not null,
  wbtphig     varchar2(5) default ' ' not null,
  wbtplp1     varchar2(8) default ' ' not null,
  wbtplp2     varchar2(8) default ' ' not null,
  wbtplp3     varchar2(8) default ' ' not null,
  wbtplp4     varchar2(8) default ' ' not null,
  wbtpspa     varchar2(33) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webtpla1 primary key( 
wbtpprg,
wbtpopt,
wbtptpl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
