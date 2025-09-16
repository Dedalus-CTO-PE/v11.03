create table hl7wexaf
(
  dhlwxmsg    char(20) default ' ' not null,
  hlwxspar    char(10) default ' ' not null,
  hlwxmesg    decimal(20,0) default 0 not null,
  lf          char(1)
);
create unique index hl7wexa1 on hl7wexaf
(
dhlwxmsg
);
revoke all on hl7wexaf from public ; 
grant select on hl7wexaf to public ; 
