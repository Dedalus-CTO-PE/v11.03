create table aaepriaf
(
  adpprty     char(3) default ' ' not null,
  adpdate     char(8) default ' ' not null,
  adptime     char(5) default ' ' not null,
  adpnumb     char(8) default ' ' not null,
  adpspar     char(7) default ' ' not null,
  lf          char(1)
);
create unique index aaepria1 on aaepriaf
(
adpprty,
adpdate,
adptime,
adpnumb
);
create unique index aaepria2 on aaepriaf
(
adpdate,
adptime,
adpprty,
adpnumb
);
revoke all on aaepriaf from public ; 
grant select on aaepriaf to public ; 
