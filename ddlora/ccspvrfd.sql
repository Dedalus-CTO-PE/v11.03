create table ccspvraf
(
  ccpvhcd     varchar2(2) default ' ' not null,
  ccpvdpt     varchar2(8) default ' ' not null,
  ccpvpcd     varchar2(8) default ' ' not null,
  ccpvcty     varchar2(4) default ' ' not null,
  ccpvrvi     number(18,6) default 0 not null,
  ccpvspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspvra1 primary key( 
ccpvhcd,
ccpvdpt,
ccpvpcd,
ccpvcty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccspvra2 on ccspvraf
(
ccpvcty,
ccpvhcd,
ccpvdpt,
ccpvpcd
)
  tablespace pas_indx; 
