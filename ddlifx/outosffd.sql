create table outosfaf
(
otoshosp    char(3),
otossite    char(6),
otossess    char(6),
otosclid    char(6),
otosdate    char(8),
otostime    char(5),
otosctyp    char(6),
otosspar    char(50),
lf          char(1)
);
create unique index outosfa1 on outosfaf
(
otoshosp,
otossite,
otossess,
otosclid,
otosdate,
otostime
);
create unique index outosfa2 on outosfaf
(
otoshosp,
otosctyp,
otossess,
otosclid,
otosdate,
otostime,
otossite
);
create unique index outosfa3 on outosfaf
(
otosdate,
otoshosp,
otossite,
otossess,
otosclid,
otostime
);
revoke all on outosfaf from public ; 
grant select on outosfaf to public ; 
