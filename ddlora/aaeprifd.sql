create table aaepriaf
(
  adpprty     varchar2(3) default ' ' not null,
  adpdate     varchar2(8) default ' ' not null,
  adptime     varchar2(5) default ' ' not null,
  adpnumb     varchar2(8) default ' ' not null,
  adpspar     varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaepria1 primary key( 
adpprty,
adpdate,
adptime,
adpnumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index aaepria2 on aaepriaf
(
adpdate,
adptime,
adpprty,
adpnumb
)
  tablespace pas_indx; 
