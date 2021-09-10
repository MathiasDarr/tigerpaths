.PHONy: run
run:
	docker-compose up -d
.PHONY: shell
shell:
	docker exec -it tigerpaths_tigergraph_1 sudo su tigergraph
.PHONY: kill
kill:
	docker kill tigerpaths_tigergraph_1
	docker system prune -f
	docker volume prune -f
