create table patcstsf
(
  cccode      varchar2(3) default ' ' not null,
  cccyymm     varchar2(6) default ' ' not null,
  ccadmn      number(8,0) default 0 not null,
  ccabday     number(8,0) default 0 not null,
  ccsamed     number(8,0) default 0 not null,
  ccsmday     number(8,0) default 0 not null,
  ccboard     number(8,0) default 0 not null,
  ccbrday     number(8,0) default 0 not null,
  ccspare     varchar2(42) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcsts1 primary key( 
cccode,
cccyymm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
