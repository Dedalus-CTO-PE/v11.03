create table patrfdpf
(
rffund      char(3),
rfdtyp      char(3),
rfdate      char(8),
rfnumb      decimal(8,0),
rfamtrf     decimal(14,2),
lf          char(1)
);
create unique index patrfdp1 on patrfdpf
(
rffund,
rfdtyp,
rfdate
);
revoke all on patrfdpf from public ; 
grant select on patrfdpf to public ; 
