create table mrtbrhaf
(
  mrbrrqnm    varchar2(10) default ' ' not null,
  mrbrdtri    varchar2(8) default ' ' not null,
  mrbrtmri    varchar2(5) default ' ' not null,
  mrbrdtre    varchar2(8) default ' ' not null,
  mrbrtmre    varchar2(5) default ' ' not null,
  mrbrloca    varchar2(4) default ' ' not null,
  mrbrnumr    number(3,0) default 0 not null,
  mrbrreqs    varchar2(35) default ' ' not null,
  mrbrphon    varchar2(20) default ' ' not null,
  mrbrpagr    varchar2(20) default ' ' not null,
  mrbrrhos    varchar2(3) default ' ' not null,
  mrbrspar    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtbrha1 primary key( 
mrbrrqnm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtbrha2 on mrtbrhaf
(
mrbrdtri,
mrbrtmri,
mrbrrqnm
)
  tablespace pas_indx; 
create unique index mrtbrha3 on mrtbrhaf
(
mrbrrhos,
mrbrloca,
mrbrdtri,
mrbrtmri,
mrbrrqnm
)
  tablespace pas_indx; 
