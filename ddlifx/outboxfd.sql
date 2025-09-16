create table outboxaf
(
otbxsite    char(6),
otbxclin    char(6),
otbxdate    char(8),
otbxstrt    char(5),
otbxslot    char(3),
otbxcomm    char(70),
otbxspar    char(50),
lf          char(1)
);
create unique index outboxa1 on outboxaf
(
otbxsite,
otbxclin,
otbxdate,
otbxstrt,
otbxslot
);
revoke all on outboxaf from public ; 
grant select on outboxaf to public ; 
