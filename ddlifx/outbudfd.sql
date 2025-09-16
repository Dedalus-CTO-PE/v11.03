create table outbudaf
(
dotbuadm    char(8),
otbudate    char(8),
otbutime    char(8),
otbuoper    char(4),
otbuport    char(2),
otbusite    char(6),
otbuspar    char(20),
lf          char(1)
);
create unique index outbuda1 on outbudaf
(
dotbuadm
);
create unique index outbuda2 on outbudaf
(
otbudate,
dotbuadm
);
revoke all on outbudaf from public ; 
grant select on outbudaf to public ; 
