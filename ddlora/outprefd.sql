create table outpreaf
(
  doproutn    varchar2(8) default ' ' not null,
  oprsite     varchar2(6) default ' ' not null,
  oprclin     varchar2(6) default ' ' not null,
  oprdate     varchar2(8) default ' ' not null,
  oprstrt     varchar2(5) default ' ' not null,
  doprslot    varchar2(3) default ' ' not null,
  oprtime     varchar2(5) default ' ' not null,
  oprctyp     varchar2(6) default ' ' not null,
  oprspar     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outprea1 primary key( 
doproutn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
